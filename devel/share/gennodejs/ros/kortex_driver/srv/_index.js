
"use strict";

let I2CWrite = require('./I2CWrite.js')
let GetGPIOConfiguration = require('./GetGPIOConfiguration.js')
let SetI2CConfiguration = require('./SetI2CConfiguration.js')
let I2CWriteRegister = require('./I2CWriteRegister.js')
let I2CRead = require('./I2CRead.js')
let GetUARTConfiguration = require('./GetUARTConfiguration.js')
let GetEthernetConfiguration = require('./GetEthernetConfiguration.js')
let SetGPIOConfiguration = require('./SetGPIOConfiguration.js')
let SetUARTConfiguration = require('./SetUARTConfiguration.js')
let SetGPIOState = require('./SetGPIOState.js')
let GetGPIOState = require('./GetGPIOState.js')
let GetI2CConfiguration = require('./GetI2CConfiguration.js')
let I2CReadRegister = require('./I2CReadRegister.js')
let SetEthernetConfiguration = require('./SetEthernetConfiguration.js')

module.exports = {
  I2CWrite: I2CWrite,
  GetGPIOConfiguration: GetGPIOConfiguration,
  SetI2CConfiguration: SetI2CConfiguration,
  I2CWriteRegister: I2CWriteRegister,
  I2CRead: I2CRead,
  GetUARTConfiguration: GetUARTConfiguration,
  GetEthernetConfiguration: GetEthernetConfiguration,
  SetGPIOConfiguration: SetGPIOConfiguration,
  SetUARTConfiguration: SetUARTConfiguration,
  SetGPIOState: SetGPIOState,
  GetGPIOState: GetGPIOState,
  GetI2CConfiguration: GetI2CConfiguration,
  I2CReadRegister: I2CReadRegister,
  SetEthernetConfiguration: SetEthernetConfiguration,
};
