/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBFluidSlideGestureRecognizer.h"

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer
{
    float _arcCenter;
    float _arcSize;
    BOOL _recognizesHorizontalPanning;
    BOOL _recognizesVerticalPanning;
}

- (id)init;
- (id)initForHorizontalPanning;
- (id)initForVerticalPanning;
- (float)computeIncrementalGestureMotion:(struct __SBGestureContext *)arg1;
- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;

@end

