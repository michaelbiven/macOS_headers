//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplM : NLModelImpl
{
    const void *_mrlModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    unsigned long long _numberOfTrainingInstances;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (unsigned long long)numberOfTrainingInstances;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)labelMap;
- (id)configuration;
- (id)modelData;
- (void)dealloc;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;
- (id)initWithOwnedModelObject:(const void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 numberOfTrainingInstances:(unsigned long long)arg5;

@end

