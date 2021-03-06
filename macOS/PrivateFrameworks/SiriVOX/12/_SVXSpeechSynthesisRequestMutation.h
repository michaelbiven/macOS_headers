//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXSpeechSynthesisRequestMutating.h"

@class NSDictionary, NSString, SVXSpeechSynthesisAudio, SVXSpeechSynthesisRequest;

@interface _SVXSpeechSynthesisRequestMutation : NSObject <SVXSpeechSynthesisRequestMutating>
{
    SVXSpeechSynthesisRequest *_baseModel;
    long long _priority;
    unsigned long long _options;
    NSString *_speakableText;
    NSDictionary *_speakableContext;
    NSString *_localizationKey;
    SVXSpeechSynthesisAudio *_presynthesizedAudio;
    NSString *_streamID;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasPriority:1;
        unsigned int hasOptions:1;
        unsigned int hasSpeakableText:1;
        unsigned int hasSpeakableContext:1;
        unsigned int hasLocalizationKey:1;
        unsigned int hasPresynthesizedAudio:1;
        unsigned int hasStreamID:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setStreamID:(id)arg1;
- (void)setPresynthesizedAudio:(id)arg1;
- (void)setLocalizationKey:(id)arg1;
- (void)setSpeakableContext:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

