navigator.gpu.requestAdapter().then((adapter) => {
    adapter.requestDevice().then((device) => {
        Module.preinitializedWebGPUDevice = device;
    });
});
