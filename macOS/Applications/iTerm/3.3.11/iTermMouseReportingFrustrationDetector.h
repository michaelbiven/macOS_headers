//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iTermMouseReportingFrustrationDetector : NSObject
{
    unsigned long long _state;
    id <iTermMouseReportingFrustrationDetectorDelegate> _delegate;
}

@property(nonatomic) __weak id <iTermMouseReportingFrustrationDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cmdC;
- (void)otherMouseEvent;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1 reported:(BOOL)arg2;
- (void)mouseDragged:(id)arg1 reported:(BOOL)arg2;
- (void)mouseDown:(id)arg1 reported:(BOOL)arg2;
- (void)setState:(unsigned long long)arg1;

@end

