navigator.gpu.requestAdapter().then((adapter) => {
    adapter.requestDevice({
        requiredFeatures: ["float32-filterable"]
    }).then((device) => {
        Module.preinitializedWebGPUDevice = device;
    });
});
