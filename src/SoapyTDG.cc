/// SoapyTDG.cpp

  #include <SoapySDR/Device.hpp>
  #include <SoapySDR/Registry.hpp>

  class SoapyTDG : public SoapySDR::Device
  {
      //Implement constructor with device specific arguments...
      //Implement all applicable virtual methods from SoapySDR::Device
  };

  SoapySDR::KwargsList findTDG(const SoapySDR::Kwargs &args)
  {
      //locate the device on the system...
      //return a list of 0, 1, or more argument maps that each identify a device
  }

  SoapySDR::Device *makeTDG(const SoapySDR::Kwargs &args)
  {
      //create an instance of the device object given the args
      //here we will translate args into something used in the constructor
      return new MyDevice(...);
  }

  static SoapySDR::Registry registerTDG("tdg", &findTDG, &makeTDG, SOAPY_SDR_ABI_VERSION);

/// *EOF*
