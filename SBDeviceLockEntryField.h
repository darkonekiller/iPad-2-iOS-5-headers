/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIPasscodeField, UITextInputTraits;

@interface SBDeviceLockEntryField : UIView
{
    int _style;
    int _interfaceOrientation;
    UIPasscodeField *_passcodeField;
    UITextInputTraits *_textInputTraits;
    struct __CFCharacterSet *_numericTrimmingSet;
    BOOL _highlighted;
    id _delegate;
}

- (id)initWithStyle:(int)arg1 interfaceOrientation:(int)arg2;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)passcodeField;
- (struct CGSize)_fieldSizeForCurrentDevice;
- (id)_backgroundImage;
- (void)_layoutForCurrentDevice;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(copy, nonatomic) NSString *stringValue;
@property(nonatomic, getter=isOkayButtonEnabled) BOOL okayButtonEnabled;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (id)textInputTraits;
- (void)passcodeFieldTextDidChange:(id)arg1;
- (BOOL)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeFieldDidAcceptEntry:(id)arg1;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

@end

