//
//  TwinTurboEngine.hpp
//  realkext
//
//  Created by Paul Ciarlo on 3/7/20.
//  Copyright © 2020 paulyc. All rights reserved.
//

#ifndef TwinTurboEngine_hpp
#define TwinTurboEngine_hpp

#include <IOKit/audio/IOAudioEngine.h>

class RB26L6 : public IOAudioEngine
{
public:
//	/*!
//	 * @function eraseOutputSamples
//	 * @abstract This function allows for the actual erasing of the mix and sample buffer to be overridden by
//	 * a child class.
//	 * @param mixBuf Pointer to the IOAudioFamily allocated mix buffer.
//	 * @param sampleBuf Pointer to the child class' sample buffer.
//	 * @param firstSampleFrame Index to the first sample frame to erase.
//	 * @param numSampleFrames Number of sample frames to erase.
//	 * @param streamFormat Format of the data to be erased.
//	 * @param audioStream Pointer to stream object that corresponds to the sample buffer being erased.
//	 * @result Must return kIOReturnSuccess if the samples have been erased.
//	 */
//	virtual IOReturn eraseOutputSamples(const void *mixBuf, void *sampleBuf, UInt32 firstSampleFrame, UInt32 numSampleFrames, const IOAudioStreamFormat *streamFormat, IOAudioStream *audioStream ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 6);
//	/*!
//	 * @function setClockIsStable
//	 * @abstract This function sets a flag that CoreAudio uses to select its sample rate tracking algorithm.  Set
//	 * this to TRUE unless that results in dropped audio.  If the driver is experiencing unexplained dropouts
//	 * setting this FALSE might help.
//	 * @param clockIsStable TRUE tells CoreAudio to use an agressive PLL to quickly lock to the engine's sample rate
//	 * while FALSE tells CoreAudio to adjust more slowly to perceived sample rate changes that might just be the
//	 * result of an unstable clock.
//	 */
//	virtual void setClockIsStable(bool clockIsStable ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 7);
//	/*!
//	 * @function setMixClipOverhead
//	 * @abstract Used to tell IOAudioFamily when the watchdog timer must fire by.
//	 * @discussion setMixClipOverhead allows an audio engine to tell IOAudioFamily how much time
//	 * an engine will take to mix and clip its samples, in percent.
//	 * The default value is 10, meaning 10%.  This will cause IOAudioFamily to make
//	 * the watchdog timer fire when there is just over 10% of the time to complete
//	 * a buffer set left (e.g. 51 samples when the HAL is using a buffer size of 512
//	 * samples).
//	 * @param newMixClipOverhead How much time per buffer should be made available for the
//	 * mix and clip routines to run.  Valid values are 1 through 99, inclusive.
//	 * @result return no error
//	*/
//	virtual void setMixClipOverhead(UInt32 newMixClipOverhead ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 8);
//	/*!
//	 * @function setClockDomain
//	 * @abstract Sets a property that CoreAudio uses to determine how devices are synchronized.  If an audio device can tell that it is
//	 * synchronized to another engine, it should set this value to that engine's clock domain.  If an audio device can be a clock master, it may publish
//	 * its own clock domain for other devices to use.
//	 * @param clockDomain is the unique ID of another engine that this engine realizes it is synchronized to, use the default value kIOAudioNewClockDomain
//	 * to have IOAudioEngine create a unique clock domain.
//	 */
//	virtual void setClockDomain(UInt32 clockDomain = kIOAudioNewClockDomain ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 9);
//	/*!
//	 * @function convertInputSamplesVBR
//	 * @abstract Override this method if you want to return a different number of sample frames than was requested.
//	 */
//	virtual IOReturn convertInputSamplesVBR(const void *sampleBuf, void *destBuf, UInt32 firstSampleFrame, UInt32 &numSampleFrames, const IOAudioStreamFormat *streamFormat, IOAudioStream *audioStream ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 10);
//	/*!
//	 * @function setInputSampleOffset
//	 * @abstract set the offset CoreAudio will read from off the current read pointer
//	 * @param numSamples size of offset in sample
//	 */
//	virtual void setInputSampleOffset(UInt32 numSamples ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 11);
//	/*!
//	 * @function setOutputSampleOffset
//	 * @abstract set the offset CoreAudio will write at off the current write pointer
//	 * @param numSamples size of offset in sample
//	 */
//	virtual void setOutputSampleOffset(UInt32 numSamples ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//	/*!
//	 * @function setAttributeForConnection
//	 * @abstract Generic method to set some attribute of the audio engine, specific to one connection.
//	 * @discussion IOAudioEngine subclasses may implement this method to allow arbitrary attribute/value pairs to be set, specific to one connection.
//	 * @param attribute Defines the attribute to be set.
//	 * @param value The new value for the attribute.
//	 * @result an IOReturn code.
//	 */
//
//    virtual IOReturn setAttributeForConnection( SInt32 connectIndex, UInt32 attribute, uintptr_t value  ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   return kIOReturnSuccess;
//	   }
//
//	// OSMetaClassDeclareReservedUsed(IOAudioEngine, 14);
//	/*! @function getAttributeForConnection
//	 * @abstract Generic method to retrieve some attribute of the audio engine, specific to one connection.
//	 * @discussion IOAudioEngine subclasses may implement this method to allow arbitrary attribute/value pairs to be returned, specific to one connection.
//	 * @param attribute Defines the attribute to be returned. Some defined attributes are:<br>
//	 * @param value Returns the value for the attribute.
//	 * @result an IOReturn code.
//	 */
//
//	virtual IOReturn getAttributeForConnection( SInt32 connectIndex, UInt32 attribute, uintptr_t * value  ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//	/*!
//     * @function createDictionaryFromSampleRate
//     * @abstract Generates a dictionary matching the given sample rate.
//     * @discussion This is an internal routine used to generate a dictionary matching the given sample rate.  It is used to generate a sample rate dictionary for the I/O Registry - used by the
//     *  CoreAudio.framework.
//     * @result Returns the newly create OSDictionary.
//     */
//	static OSDictionary *createDictionaryFromSampleRate(const IOAudioSampleRate *sampleRate, OSDictionary *rateDict = 0 ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return rateDict;
//	}
//
//    /*!
//     * @function createSampleRateFromDictionary
//     * @abstract Generates a sample rate from an OSDictionary.
//     * @discussion This is an internal routine used to generate a sample rate from an OSDictionary.  It is used to generate a sample rate give a new OSDictionary from the IORegistry - coming
//     *  from the CoreAudio.framework.
//     * @result Returns the sample rate.
//     */
//	static IOAudioSampleRate *createSampleRateFromDictionary(const OSDictionary *rateDict, IOAudioSampleRate *sampleRate = 0 ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return nullptr;
//	}
//
//    /*!
//     * @function init
//     * @abstract Performs initialization of a newly allocated IOAudioEngine.
//     * @discussion This function is responsible for initialization of all of the general attributes of
//     *  a new IOAudioEngine.  It initializes instance variables to their default
//     *  values and allocates the shared status buffer.  Subclasses will likely want to override this method
//     *  and do all of their common initialization in their implementation.  They do need to be sure to call
//     *  IOAudioEngine's implementation of init and pay attention to the return value.
//     * @param properties The default properties for the IOAudioEngine.
//     * @result Returns true if initialization was successful.
//     */
//	virtual bool init(OSDictionary *properties ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 override {
//		return true;
//	}
//
//    /*!
//     * @function free
//     * @abstract Frees all of the resources allocated by the IOAudioEngine.
//     * @discussion Do not call this directly.  This is called automatically by the system when the instance's
//     *  refcount goes to 0.  To decrement the refcount, call release() on the object.
//     */
//	virtual void free( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//    /*!
//     * @function getWorkLoop
//     * @abstract Returns the IOWorkLoop for the driver.
//     */
//	virtual IOWorkLoop *getWorkLoop() const {
//		return nullptr;
//	}
//
//    /*!
//     * @function getCommandGate
//     * @abstract Returns the IOCommandGate for this IOAudioEngine.
//     */
//	virtual IOCommandGate *getCommandGate() const {
//		return nullptr;
//	}
//
//    /*!
//     * @function start
//     * @abstract A simple cover function for start(IOService *, IOAudioDevice *) that assumes the provider
//     *  is the IOAudioDevice.
//     * @discussion Subclasses will want to override start(IOService *, IOAudioDevice *) rather than this
//     *  one.
//     * @param provider The service provider for the IOAudioEngine (the IOAudioDevice in this case).
//     * @result Returns true if the IOAudioEngine was successfully started.
//     */
//    virtual bool start(IOService *provider ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 override {
//		return true;
//	   }
//
//    /*!
//     * @function start
//     * @abstract Standard IOKit start() routine called to start an IOService.
//     * @discussion This function is called in order to prepare the IOAudioEngine for use.  It does NOT
//     *  mean that the audio I/O engine itself should be started.  This implementation gets the IOWorkLoop
//     *  from the IOAudioDevice and allocates an IOCommandGate.  Finally it calls initHardware() in which
//     *  all of the subclass-specific device initialization should be done.  Upon return from initHardware()
//     *  all IOAudioStreams should be created and added to the audio engine.  Also, all IOAudioControls
//     *  for this IOAudioEngine should be created and attached.
//     * @param provider The service provider for the IOAudioEngine.
//     * @param device The IOAudioDevice to which this IOAudioEngine belongs.
//     * @result Returns true if the service was successfully started.
//     */
//    virtual bool start(IOService *provider, IOAudioDevice *device ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 override {
//		   return true;
//	   }
//
//    /*!
//     * @function initHardware
//     * @abstract This function is called by start() to provide a convenient place for the subclass to
//     *  perform its hardware initialization.
//     * @discussion Upon return from this function, all IOAudioStreams and IOAudioControls should be created
//     *  and the audio engine should be ready to be started when a client requests that playback begin.
//     * @function provider The service provider numb for this audio engine - typically the IOAudioDevice.
//     * @result Returns true if the hardware was successfully initialized.
//     */
//    virtual bool initHardware(IOService *provider ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   return true;
//	   }
//
//    /*!
//     * @function stop
//     * @abstract Stops the service and prepares for the driver to be terminated.
//     * @discussion This function is called before the driver is terminated and usually means that the device
//     *  has been removed from the system.
//     * @param provider The service provider for the IOAudioEngine.
//     */
//    virtual void stop(IOService *provider ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function registerService
//     * @abstract Called when this audio engine is ready to begin vending services.
//     * @discussion This function is called by IOAudioDevice::activateAudioEngine() once the audio engine
//     *  has been fully initialized and is ready to begin audio playback.
//     * @param options
//     */
//    virtual void registerService(IOOptionBits options = 0 ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    virtual void setAudioDevice(IOAudioDevice *device ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//    virtual void setIndex(UInt32 index ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    virtual void setDescription(const char *description ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function newUserClient
//     * @abstract Requests a new user client object for this service.
//     * @discussion This function is called automatically by I/O Kit when a user process attempts
//     *  to connect to this service.  It allocates a new IOAudioEngineUserClient object and increments
//     *  the number of connections for this audio engine.  If this is the first user client for this IOAudioEngine,
//     *  it calls startAudioEngine().  There is no need to call this function directly.
//	 *  A derived class that requires overriding of newUserClient should override the version with the properties
//	 *  parameter for Intel targets, and without the properties parameter for PPC targets.  The #if __i386__ directive
//	 *  can be used to select between the two behaviors.
//     * @param task The task requesting the new user client.
//     * @param securityID Optional security paramater passed in by the client - ignored.
//     * @param type Optional user client type passed in by the client - ignored.
//     * @param handler The new IOUserClient * must be stored in this param on a successful completion.
//     * @param properties A dictionary of additional properties for the connection.
//     * @result Returns kIOReturnSuccess on success.  May also result kIOReturnError or kIOReturnNoMemory.
//     */
//    virtual IOReturn newUserClient(task_t task, void *securityID, UInt32 type, IOUserClient **handler ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10;
//    virtual IOReturn newUserClient(task_t task, void *securityID, UInt32 type, OSDictionary *properties, IOUserClient **handler ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10;
//
//    /*!
//     * @function addAudioStream
//     * @abstract Adds an IOAudioStream to the audio engine.
//     * @discussion This function is called by the driver to add an IOAudioStream to the audio engine.  This must be called at least once to make sure the audio engine has at least one IOAudioStream.
//     * @param stream The IOAudioStream to be added.
//     * @result Returns kIOReturnSuccess if the stream was successfully added.
//     */
//    virtual IOReturn addAudioStream(IOAudioStream *stream ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10;
//
//    virtual IOAudioStream *getAudioStream(IOAudioStreamDirection direction, UInt32 channelID ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10;
//
//    virtual void lockAllStreams( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//    virtual void unlockAllStreams( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    virtual void updateChannelNumbers( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function resetStatusBuffer
//     * @abstract Resets the status buffer to its default values.
//     * @discussion This is called during startAudioEngine() and resumeAudioEngine() to clear out the status buffer
//     *  in preparation of starting up the I/O engine.  There is no need to call this directly.
//     */
//	virtual void resetStatusBuffer( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//    /*!
//     * @function clearAllSampleBuffers
//     * @abstract Zeros out all of the sample and mix buffers associated with the IOAudioEngine
//     * @discussion This is called during resumeAudioEngine() since the audio engine gets started back at the
//     *  beginning of the sample buffer.
//     */
//	virtual void clearAllSampleBuffers( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
//
//    /*!
//     * @function getCurrentSampleFrame
//     * @abstract Gets the current sample frame from the IOAudioEngine subclass.
//     * @result
//     */
//    virtual UInt32 getCurrentSampleFrame() = 0;
//
//    /*!
//     * @function startAudioEngine
//     * @abstract Starts the audio I/O engine.
//     * @discussion This method is called automatically when the audio engine is placed into use the first time.
//     *  This must be overridden by the subclass.  No call to the superclass's implementation is
//     *  necessary.  The subclass's implementation must start up the audio I/O engine.  This includes any audio
//     *  engine that needs to be started as well as any interrupts that need to be enabled.  Upon successfully
//     *  starting the engine, the subclass's implementation must call setState(kIOAudioEngineRunning).  If
//     *  it has also checked the state using getState() earlier in the implementation, the stateLock must be
//     *  acquired for the entire initialization process (using IORecursiveLockLock(stateLock) and
//     *  IORecursiveLockUnlock(stateLock)) to ensure that the state remains consistent.  See the general class
//     *  comments for an example.
//     * @result Must return kIOReturnSuccess on a successful start of the engine.
//     */
//    virtual IOReturn startAudioEngine( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//    /*!
//     * @function stopAudioEngine
//     * @abstract Stops the audio I/O engine.
//     * @discussion This method is called automatically when the last client disconnects from this audio engine.
//     *  It must be overridden by the subclass.  No call to the superclass's implementation is necessary.
//     *  The subclass's implementation must stop the audio I/O engine.  The audio engine (if it exists) should
//     *  be stopped and any interrupts disabled.  Upon successfully stopping the engine, the subclass must call
//     *  setState(kAudioEngineStopped).  If it has also checked the state using getState() earlier in the
//     *  implementation, the stateLock must be acquired for the entire initialization process (using
//     *  IORecursiveLockLock(stateLock) and IORecursiveLockUnlock(stateLock)) to ensure that the state remains
//     *  consistent.
//     * @result Must return kIOReturnSuccess on a successful stop of the engine.
//     */
//    virtual IOReturn stopAudioEngine( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//    virtual IOReturn pauseAudioEngine( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//    virtual IOReturn resumeAudioEngine( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//    /*!
//     * @function performAudioEngineStart
//     * @abstract Called to start the audio I/O engine
//     * @discussion This method is called by startAudioEngine().  This must be overridden by the subclass.
//	 *	No call to the superclass' implementation is necessary.  The subclass' implementation must start up the
//	 *	audio I/O engine.  This includes any audio engine that needs to be started as well as any interrupts
//	 *	that need to be enabled.
//     * @result Must return kIOReturnSuccess on a successful start of the engine.
//     */
//    virtual IOReturn performAudioEngineStart( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//    /*!
//     * @function performAudioEngineStop
//     * @abstract Called to stop the audio I/O engine
//     * @discussion This method is called by stopAudioEngine() and pauseAudioEngine.
//     *  This must be overridden by the subclass.  No call to the superclass' implementation is
//     *  necessary.  The subclass' implementation must stop the audio I/O engine.  This includes any audio
//     *  engine that needs to be stopped as well as any interrupts that need to be disabled.
//     * @result Must return kIOReturnSuccess on a successful stop of the engine.
//     */
//    virtual IOReturn performAudioEngineStop( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOReturnSuccess;
//	}
//
//    /*!
//     * @function getState
//     * @abstract Returns the current state of the IOAudioEngine.
//     * @discussion If this method is called in preparation for calling setState(), the stateLock must
//     *  be acquired before the first call to getState() and held until after the last call to setState().
//     *  Be careful not to return from the code acquiring the lock while the lock is being held.  That
//     *  will cause a deadlock situation.
//     * @result The current state of the IOAudioEngine: kIOAudioEngineRunning, kIOAudioEngineStopped.
//     */
//	virtual IOAudioEngineState getState( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return kIOAudioEngineRunning;
//	}
//
//    /*!
//     * @function getSampleRate
//     * @abstract Returns the sample rate of the IOAudioEngine in samples per second.
//     */
//    virtual const IOAudioSampleRate *getSampleRate( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10;
//
//    virtual IOReturn hardwareSampleRateChanged(const IOAudioSampleRate *sampleRate ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return 44100;
//	}
//
//    /*!
//     * @function getRunEraseHead
//     * @abstract Returns true if the audio engine will run the erase head when the audio engine is running.
//     */
//    virtual bool getRunEraseHead( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   return true;
//	   }
//
//    /*!
//     * @function getStatus
//     * @abstract Returns a pointer to the shared status buffer.
//     */
//	virtual const IOAudioEngineStatus *getStatus( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		return nullptr;
//	}
//
//    /*!
//     * @function timerCallback
//     * @abstract A static method used as a callback for the IOAudioDevice timer services.
//     * @discussion This method implements the IOAudioDevice::TimerEvent type.
//     * @param arg1 The IOAudioEngine that is the target of the event.
//     * @param device The IOAudioDevice that sent the timer event.
//     */
//    static void timerCallback(OSObject *arg1, IOAudioDevice *device ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function timerFired
//     * @abstract Indicates the timer has fired.
//     * @discussion This method is called by timerCallback to indicate the timer has fired.  This method calls performErase() and performFlush() to do erase head processing and
//     *  audio engine flushing each time the timer event fires.
//     */
//    virtual void timerFired( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function getTimerInterval
//     * @abstract Gets the timer interval for use by the timer event.
//     * @discussion This method is called each time the timer event is enabled through addTimer().  The default
//     *  implementation is set to return a value such that the timer event runs n times each cycle of the audio
//     *  engine through the sample buffer.  The value n is stored as the instance variable: numErasesPerBuffer.
//     *  The default value of numErasesPerBuffer is set to IOAUDIOENGINE_DEFAULT_NUM_ERASES_PER_BUFFER which is 4.
//     *  A subclass may change the value of numErasesPerBuffer or override getTimerInterval.  If it is overridden,
//     *  the subclass should call the superclass's implementation, compare its interval with the superclass's and
//     *  return the smaller of the two.
//     * @result Returns the interval for the timer event.
//     */
//    virtual AbsoluteTime getTimerInterval( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   return mach_absolute_time();
//	   }
//
//    /*!
//     * @function performErase
//     * @abstract Performs erase head processing.
//     * @discussion This method is called automatically each time the timer event fires and erases the sample
//     *  buffer and mix buffer from the previous location up to the current location of the audio engine.
//     */
//    virtual void performErase( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		   ;
//	   }
//
//    /*!
//     * @function performFlush
//     * @abstract Performs the flush operation.
//     * @discussion This method is called automatically each time the timer event fires.  It stops the audio engine
//     *  if there are no more clients and the audio engine is passed the latest flush ending position.
//     */
//	virtual void performFlush( ) AVAILABLE_MAC_OS_X_VERSION_10_4_AND_LATER_BUT_DEPRECATED_IN_MAC_OS_X_VERSION_10_10 {
//		;
//	}
};

#endif /* TwinTurboEngine_hpp */
