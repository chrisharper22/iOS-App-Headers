//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGSignalsModel.h>

@class IGValueSignal;

@interface IGContinuousFetchSignalsModel : IGSignalsModel
{
    IGValueSignal *_willFetchContent;
    IGValueSignal *_didFetchContent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGValueSignal *didFetchContent; // @synthesize didFetchContent=_didFetchContent;
@property(readonly, nonatomic) IGValueSignal *willFetchContent; // @synthesize willFetchContent=_willFetchContent;
- (id)targetSignal;
- (id)initWithIdentifier:(id)arg1 queueScheduler:(id)arg2;

@end

