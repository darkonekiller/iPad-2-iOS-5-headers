/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBAlertItem.h"

@interface SBLockScreenAudioRoutesAlertItem : SBAlertItem
{
}

- (Class)alertSheetClass;
- (id)alertSheet;
- (BOOL)allowMenuButtonDismissal;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (BOOL)shouldShowInLockScreen;
- (BOOL)togglesMediaControls;
- (BOOL)allowAutoUnlock;
- (void)performUnlockAction;
- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;

@end

