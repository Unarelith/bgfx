navigator.gpu.requestAdapter().then((adapter) => {
    adapter.requestDevice({
        requiredFeatures: [
            "float32-filterable"
        ],
        requiredLimits: {
            maxComputeInvocationsPerWorkgroup: 512,
            maxComputeWorkgroupSizeX: 512
        },
    }).then((device) => {
        Module.preinitializedWebGPUDevice = device;
    });
});
