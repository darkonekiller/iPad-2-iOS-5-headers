/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIApplication.h"

#import "UIApplicationDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableSet, NSNumberFormatter, NSSet, NSString, NSTimer, NSURL, SBAppContextHostManager, SBApplication, SBDimmingWindow, SBUIController, UIWindow;

@interface SpringBoard : UIApplication <UIApplicationDelegate>
{
    SBUIController *_uiController;
    NSTimer *_menuButtonTimer;
    NSTimer *_lockButtonTimer;
    NSTimer *_idleTimer;
    NSTimer *_autoLockTimer;
    double _lastUndimEventTime;
    double _lastTimeIdleCausedDim;
    double _headsetButtonDownTime;
    struct __GSEvent *_headsetDownEvent;
    int _headsetClickCount;
    SBDimmingWindow *_simulatedBlankingWindow;
    unsigned int _headsetButtonClickCount:8;
    unsigned int _menuButtonClickCount:8;
    unsigned int _screenWasDimOnMenuDown:1;
    unsigned int _waitingForMenuDoubleTapAfterActingOnSingleTap:1;
    unsigned int _screenshotWasTaken:1;
    unsigned int _disableAutoDimming:1;
    unsigned int _dontLockOnNextLockUp:1;
    unsigned int _poweringDown:1;
    unsigned int _headsetDownDelayedActionPerformed:1;
    unsigned int _isSeekingInMedia:1;
    unsigned int _forcePortraitStatusBarOrientation:1;
    unsigned int _lockScreenCameraWantsIdleTimerDisabled:1;
    int _mediaSeekDirection;
    float _currentBacklightLevel;
    unsigned int _springBoardRequestsAccelerometerEvents;
    int _activeInterfaceOrientation;
    NSURL *_menuDoubleTapURL;
    int _notifyDontAnimateREOToken;
    int _notifyDontAllowMediaHUDToken;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
    BOOL _proximityEventsEnabled;
    NSSet *_restrictionDisabledApplications;
    double _sampleSystemStartTime;
    NSDictionary *_startAppsCPUTimes;
    struct __CFDictionary *_registeredSimpleRemoteAppToPriority;
    SBApplication *_registeredSimpleRemoteApp;
    SBApplication *_nowPlayingApp;
    SBApplication *_menuButtonInterceptApp;
    BOOL _menuButtonInterceptAppEnabledForever;
    NSString *_originatingOpenURLDisplayId;
    NSMutableArray *_disableNowPlayingHUDAssertionBundleIds;
    NSMutableArray *_appsRegisteredForVolumeEvents;
    NSNumberFormatter *_decimalFormatter;
    NSNumberFormatter *_percentFormatter;
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    struct _opaque_pthread_t *_backgroundMIGServerThread;
    struct _opaque_pthread_t *_iconGenerationMIGServerThread;
    SBAppContextHostManager *_springBoardContextHostManager;
    UIWindow *_springBoardContextHostWindow;
    NSMutableSet *_displaysRequestingAggressiveJetsamMode;
}

+ (BOOL)registerForSystemEvents;
+ (BOOL)rendersLocally;
- (id)init;
- (void)_createLogFile;
- (void)writeLogFile;
- (void)handleKeyEvent:(struct __GSEvent *)arg1;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (void)updateStackshotSettings;
- (void)updatePowerlog;
- (void)_performDeferredLaunchWork;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)appleIconViewRemoved;
- (BOOL)launchedAfterLanguageRestart;
- (void)clearLaunchedAfterLanguageRestart;
- (id)_settingLanguageStringForNewLanguage;
- (void)languageChanged;
- (void)_rotateView:(id)arg1 toOrientation:(int)arg2;
- (void)wipeDeviceNow;
- (void)checkPasscodeCompliance;
- (void)showEDGEActivationFailureAlert:(id)arg1 reason:(id)arg2 forMMS:(BOOL)arg3;
- (void)_effectiveSettingsDidChange;
- (void)_assistantPreferenceDidChange:(id)arg1;
- (void)userDefaultsDidChange:(id)arg1;
- (void)_lockdownActivationChanged:(id)arg1;
- (void)_testPhoneAlerts;
- (void)runFieldTestScript;
- (void)_significantTimeChange;
- (void)significantTimeChange;
- (void)batteryStatusDidChange:(id)arg1;
- (BOOL)shouldRunFieldTestScript;
- (BOOL)iapIsInExtendedMode;
- (BOOL)canShowLockScreenHUDControls;
- (BOOL)canShowLockScreenCameraButton;
- (BOOL)canShowNowPlayingControls;
- (void)setAppDisabledNowPlayingHUD:(BOOL)arg1 bundleIdentifier:(id)arg2;
- (BOOL)respondImmediatelyToMenuSingleTapAllowingDoubleTap:(char *)arg1;
- (void)goToSpotlight:(BOOL)arg1;
- (BOOL)handleDoubleTapAction;
- (void)handleMenuDoubleTap;
- (void)_primeMenuButtonAssistant;
- (void)_setMenuButtonTimer:(id)arg1;
- (void)_setLockButtonTimer:(id)arg1;
- (void)cancelMenuButtonRequests;
- (void)clearMenuButtonTimer;
- (void)_menuButtonWasHeld;
- (double)_menuHoldTime;
- (void)menuButtonDown:(struct __GSEvent *)arg1;
- (void)menuButtonUp:(struct __GSEvent *)arg1;
- (void)_giveUpOnMenuDoubleTap;
- (void)_keyboardAvailabilityChanged;
- (void)_runActivateAssistantTest;
- (void)_activateAssistantWithEvent:(int)arg1 withCompletion:(id)arg2;
- (void)activateAssistantWithOptions:(id)arg1 withCompletion:(id)arg2;
- (void)_startSeekWithDirection:(id)arg1;
- (void)mediaKeyDown:(struct __GSEvent *)arg1;
- (void)mediaKeyUp:(struct __GSEvent *)arg1;
- (void)_handleMenuButtonEvent;
- (void)lockButtonDown:(struct __GSEvent *)arg1;
- (void)lockButtonWasHeld;
- (void)extendButtonTimersForWake;
- (void)_powerDownNow;
- (void)_rebootNow;
- (void)reboot;
- (void)powerDown;
- (BOOL)isPoweringDown;
- (void)powerDownRequested:(id)arg1;
- (void)powerDownCanceled:(id)arg1;
- (BOOL)relaunchingForSetupLanguageChange;
- (void)relaunchSpringBoard;
- (void)_relaunchSpringBoardNow;
- (void)lockButtonUp:(struct __GSEvent *)arg1;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_performDelayedHeadsetClickTimeout;
- (id)simpleRemoteDestinationApp;
- (void)sendSimpleRemoteActionToRegisteredApp:(int)arg1;
- (void)_iapServerConnectionDiedNotification:(id)arg1;
- (void)_iapExtendedModeReset;
- (void)_imagesMounted;
- (void)_setDeferredHeadsetButtonDownEvent:(struct __GSEvent *)arg1;
- (void)headsetButtonDown:(struct __GSEvent *)arg1;
- (void)headsetButtonUp:(struct __GSEvent *)arg1;
- (void)headsetAvailabilityChanged:(struct __GSEvent *)arg1;
- (void)smsPrefsChanged;
- (void)ALSPrefsChanged:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)updateCapabilitiesAndIconVisibility;
- (BOOL)isDisplayIdentifierRestrictionDisabled:(id)arg1;
- (void)loadDebuggingAndDemoPrefs;
- (void)debuggingAndDemoPrefsWereChanged;
- (void)_localeChanged;
- (void)localeChanged;
- (void)autoLockPrefsChanged;
- (void)pinPolicyChanged;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)ringerChanged:(int)arg1;
- (void)_updateRingerStateWithVisuals:(BOOL)arg1 updatePreferenceRegister:(BOOL)arg2;
- (void)accessoryKeyStateChanged:(struct __GSEvent *)arg1;
- (unsigned int)_frontmostApplicationPort;
- (void)quitTopApplication:(struct __GSEvent *)arg1;
- (void)applicationExited:(struct __GSEvent *)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent *)arg1;
- (void)applicationSuspend:(struct __GSEvent *)arg1;
- (void)applicationSuspended:(struct __GSEvent *)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent *)arg1;
- (void)statusBarReturnActionTap:(struct __GSEvent *)arg1;
- (int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
- (void)hideSpringBoardStatusBar;
- (void)showSpringBoardStatusBar;
- (void)setMetaHostingEnabled:(BOOL)arg1;
- (BOOL)isMetaHostingEnabled;
- (id)metaHostView;
- (id)metaHostWindow;
- (void)showAlertForUnhandledURL:(id)arg1 error:(int)arg2;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent *)arg2;
- (BOOL)applicationCanOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (void)applicationOpenURL:(id)arg1;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 animating:(BOOL)arg3;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 animating:(BOOL)arg3 sender:(id)arg4;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 animating:(BOOL)arg3 additionalActivationFlag:(unsigned int)arg4;
- (void)applicationOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2 animating:(BOOL)arg3 sender:(id)arg4 additionalActivationFlag:(unsigned int)arg5;
- (void)_openURLCore:(id)arg1 display:(id)arg2 publicURLsOnly:(BOOL)arg3 animating:(BOOL)arg4 additionalActivationFlag:(unsigned int)arg5;
- (BOOL)canOpenURL:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (void)setMenuButtonInterceptApp:(id)arg1 forever:(BOOL)arg2;
- (id)menuButtonInterceptApp;
- (BOOL)menuButtonInterceptAppEnabledForever;
- (void)setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)setAppRegisteredForVolumeEvents:(id)arg1 isActive:(BOOL)arg2;
- (id)appsRegisteredForVolumeEvents;
- (void)volumeChanged:(struct __GSEvent *)arg1;
- (void)setBacklightFactorPending:(float)arg1;
- (void)setBacklightFactor:(float)arg1 keepTouchOn:(BOOL)arg2;
- (void)setBacklightFactor:(float)arg1;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 keepTouchOn:(BOOL)arg3 didFinishTarget:(id)arg4 selector:(SEL)arg5;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 didFinishTarget:(id)arg3 selector:(SEL)arg4;
- (void)setBacklightLevel:(float)arg1;
- (void)setBacklightLevel:(float)arg1 permanently:(BOOL)arg2;
- (float)currentBacklightLevel;
- (float)systemBacklightLevel;
- (void)systemWillSleep;
- (void)setupMidnightTimer;
- (void)_midnightPassed;
- (void)_adjustMidnightTimerAfterSleep;
- (void)setBacklightFactorToZero;
- (void)cancelSetBacklightFactorToZeroAfterDelay;
- (void)setBacklightFactorToZeroAfterDelay;
- (void)showSimulatedScreenBlank;
- (void)hideSimulatedScreenBlank;
- (void)dimToBlackKeepingTouchOn;
- (void)undim;
- (void)lockAfterCall;
- (BOOL)shouldDimToBlackInsteadOfLock;
- (void)autoLock;
- (void)didIdle;
- (double)nextIdleTimeDuration;
- (double)nextLockTimeDuration;
- (void)clearIdleTimer;
- (void)resetIdleTimerAndUndim;
- (void)resetIdleTimerAndUndim:(BOOL)arg1;
- (void)_proximityChanged:(id)arg1;
- (BOOL)caseIsEnabledAndLatched;
- (BOOL)allowCaseLatchLockAndUnlock;
- (void)keyboardOrCaseLatchWantsToAttemptUnlock:(id)arg1;
- (void)noteCaseHardwarePresent;
- (void)caseLatchWantsToAttemptLock;
- (void)userEventOccurred;
- (void)_updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2 triggeredbyRouteWillChangeToReceiverNotification:(BOOL)arg3;
- (void)updateRejectedInputSettingsForInCallState:(BOOL)arg1 isOutgoing:(BOOL)arg2;
- (void)updateRejectedInputSettings;
- (void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)arg1;
- (void)lockDevice:(struct __GSEvent *)arg1;
- (void)showThermalAlertIfNecessary;
- (void)respondToCurrentThermalCondition;
- (void)_beginThermalJetsamCPUSampling;
- (void)_killThermallyActiveApplication;
- (id)_newAppsCPUTimesDictionary;
- (void)didReceiveMemoryWarning;
- (void)noteSubstantialTransitionOccured;
- (void)updateMirroredDisplayOrientation;
- (void)noteInterfaceOrientationChanged:(int)arg1;
- (void)noteInterfaceOrientationChanged:(int)arg1 updateMirroredDisplays:(BOOL)arg2;
- (int)activeInterfaceOrientation;
- (int)activeInterfaceOrientationWithoutConsideringAlerts;
- (int)_frontMostAppOrientation;
- (int)interfaceOrientationForCurrentDeviceOrientation;
- (void)reportStatusBarOrientationAsPortrait:(BOOL)arg1;
- (int)statusBarOrientation;
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)arg1;
- (void)_removeDefaultInterfaceOrientatationOverride;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (BOOL)_alertWindowShouldRotate;
- (double)windowRotationDuration;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (void)_migrateMenuDoubleTapSetting;
- (void)updateMenuDoubleTapSettings;
- (void)setZoomTouchEnabled:(BOOL)arg1;
- (BOOL)proximityEventsEnabled;
- (void)setProximityEventsEnabled:(BOOL)arg1;
- (BOOL)expectsFaceContact;
- (BOOL)expectsFaceContactInLandscape;
- (void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)updateProximitySettings;
- (void)frontDisplayDidChange;
- (void)applicationWillOrderInContext:(id)arg1 windowLevel:(float)arg2 windowOutput:(int)arg3;
- (void)applicationDidOrderOutContext:(id)arg1;
- (void)didDismissMiniAlert;
- (void)willDisplayMiniAlert:(int *)arg1;
- (void)willDismissMiniAlert:(int *)arg1 andShowAnother:(BOOL)arg2;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (BOOL)canShowAlerts;
- (BOOL)isLocked;
- (int)alertInterfaceOrientation;
- (void)launchMusicPlayerSuspended;
- (void)_launchMusicPlayerSuspendedAndStartMusic;
- (void)_tearDownNow;
- (void)tearDown;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (BOOL)isMusicPlayerInNowPlayingView;
- (id)nowPlayingApp;
- (BOOL)isNowPlayingAppPlaying;
- (BOOL)isMusicPlayerPlaying;
- (void)setNowPlayingInfo:(id)arg1 forApplication:(id)arg2;
- (void)_updateRegisteredSimpleRemoteApp;
- (void)setSimpleRemoteRoutingPriority:(unsigned int)arg1 forApplication:(id)arg2;
- (unsigned int)simpleRemoteRoutingPriorityForApplication:(id)arg1;
- (unsigned int)simpleRemoteRoutingPriority;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (BOOL)isCameraApp;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (id)formattedPercentStringForNumber:(id)arg1;
- (id)_accessibilityFrontMostApplication;
- (id)_accessibilityTopDisplay;
- (id)_accessibilityRunningApplications;
- (BOOL)_accessibilityIsSystemGestureActive;
- (BOOL)_accessibilityObjectWithinProximity;
- (void)_accessibilitySetEventTapCallback:(void *)arg1;
- (void *)_accessibilityEventTapCallback;
- (void)_accessibilityProcessHIDEvent:(struct __IOHIDEvent *)arg1;
- (BOOL)_accessibilityIsSBStealingEvents;
- (double)_accessibilityActivationAnimationStartDelay;
- (void)_accessibilityActivationAnimationWillBegin;
- (double)_accessibilityDeactivationAnimationStartDelay;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (BOOL)_isSwitcherShowing;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (void)_spokenLanguageChanged;
- (void)beginListeningForAssistantActivationGesture;
- (void)stopListeningForAssistantActivationGesture;
- (void)setSystemAggressiveJetsamEnabled:(BOOL)arg1 forDisplay:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIWindow *window;

@end

