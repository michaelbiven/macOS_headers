//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AKPinFieldViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class AKPinFieldView, NSString, NSTextField;

@interface AKiCSCEntryView : NSView <NSTextFieldDelegate, AKPinFieldViewDelegate>
{
    BOOL _isCodeEditable;
    id <AKiCSCEntryViewDelegate> _delegate;
    long long _icscType;
    NSTextField *_passwordField;
    AKPinFieldView *_pinView;
}

@property(retain) AKPinFieldView *pinView; // @synthesize pinView=_pinView;
@property(retain) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property long long icscType; // @synthesize icscType=_icscType;
@property id <AKiCSCEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL isCodeEditable; // @synthesize isCodeEditable=_isCodeEditable;
- (void).cxx_destruct;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)returnPressedOnPasswordField:(id)arg1;
- (void)enable;
- (void)disable;
- (void)codeWasIncorrect;
- (void)setFocusToCodeEntry;
@property(readonly) NSString *enteredCode;
- (void)setUpNumericPasscode:(id)arg1;
- (void)setUpComplexPasscode:(id)arg1;
- (id)initWithType:(long long)arg1 codeLength:(id)arg2 placeHolderString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

