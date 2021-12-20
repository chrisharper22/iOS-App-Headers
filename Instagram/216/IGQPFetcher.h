//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "QPFetcher-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IGMultipleAccountHandling;

@interface IGQPFetcher : NSObject <QPFetcher>
{
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    NSMutableDictionary *_responsesByUserPK;
}

- (void).cxx_destruct;
- (_Bool)_hasAtLeastOneSuccessfulFetch;
- (_Bool)_hasCompletedAllFetches;
- (void)fetchPromotionsWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithMultipleAccountHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
