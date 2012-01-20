/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface SBBatteryChargingView : UIView
{
    int _type;
    UIImageView *_topBatteryView;
    UIImageView *_bottomBatteryView;
    UIImage *_lastBatteryImage;
    UILabel *_percentLabel;
    int _lastBatteryIndex;
    int _lastBatteryPercentage;
    unsigned int _showReflection:1;
}

+ (struct CGSize)defaultSizeForType:(int)arg1;
+ (float)batteryHeightForType:(int)arg1;
+ (int)redChargeIndexForType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;
- (void)dealloc;
- (void)setShowsReflection:(BOOL)arg1;
- (int)_currentBatteryIndex;
- (id)_imageFormatString;
- (void)_batteryStatusChanged:(id)arg1;

@end

