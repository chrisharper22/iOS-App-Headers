//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAYMHSingleAccountLocalExperiment;

@interface IGPersistedLoginAccountsBlendingManager : NSObject
{
    IGAYMHSingleAccountLocalExperiment *_singleTapLocalExperiment;
    _Bool _cloudMultiTapEnabled;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isCloudMultiTapEnabled) _Bool cloudMultiTapEnabled; // @synthesize cloudMultiTapEnabled=_cloudMultiTapEnabled;
- (id)rankedAccountsToSurface:(id)arg1;
- (id)accountsToSurfaceWithPersistedAccounts:(id)arg1 cloudPersistedAccounts:(id)arg2 oneTapAccounts:(id)arg3;
- (id)initWithSingleTapExperiment:(id)arg1;

@end

