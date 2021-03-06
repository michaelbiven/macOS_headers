//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFSpeechSynthesisRecord, NSError, SVXSpeechSynthesisRequest, SVXSpeechSynthesisUtteranceInfo, SVXSpeechSynthesizer;

@protocol SVXSpeechSynthesisListening <NSObject>
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 didFailRequest:(SVXSpeechSynthesisRequest *)arg2 taskTracker:(id <SVXTaskTracking>)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 didInterruptRequest:(SVXSpeechSynthesisRequest *)arg2 taskTracker:(id <SVXTaskTracking>)arg3;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 didCancelRequest:(SVXSpeechSynthesisRequest *)arg2 taskTracker:(id <SVXTaskTracking>)arg3;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 didFinishRequest:(SVXSpeechSynthesisRequest *)arg2 utteranceInfo:(SVXSpeechSynthesisUtteranceInfo *)arg3 record:(AFSpeechSynthesisRecord *)arg4 taskTracker:(id <SVXTaskTracking>)arg5;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 didStartRequest:(SVXSpeechSynthesisRequest *)arg2 record:(AFSpeechSynthesisRecord *)arg3 taskTracker:(id <SVXTaskTracking>)arg4;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 willStartRequest:(SVXSpeechSynthesisRequest *)arg2 taskTracker:(id <SVXTaskTracking>)arg3;
- (void)speechSynthesizer:(SVXSpeechSynthesizer *)arg1 willEnqueueRequest:(SVXSpeechSynthesisRequest *)arg2 taskTracker:(id <SVXTaskTracking>)arg3;
- (void)speechSynthesizerDidBecomeIdle:(SVXSpeechSynthesizer *)arg1;
- (void)speechSynthesizerDidBecomeBusy:(SVXSpeechSynthesizer *)arg1;
@end

