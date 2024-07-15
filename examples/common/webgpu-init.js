navigator.gpu.requestAdapter().then((adapter) => {
    adapter.requestDevice({
        requiredFeatures: [
            "float32-filterable"
        ],
        requiredLimits: {
            maxBufferSize: 536870912, // 512 MiB
            maxComputeInvocationsPerWorkgroup: 512,
            maxComputeWorkgroupSizeX: 512,
            maxStorageBufferBindingSize: 536870912
        },
    }).then((device) => {
        Module.preinitializedWebGPUDevice = device;
    });
});
