//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGARLocationEffectsFeedDataSource-Protocol.h"

@class IGARLocationEffectPreviewGQLDataProvider, IGCameraEffectGroupPreview, NSArray, NSDictionary, NSOrderedSet, NSString;
@protocol IGARLocationEffectsFeedDataSourceAnnouncer;

@interface IGARLocationEffectsPreviewFeedDataProvider : NSObject <IGARLocationEffectsFeedDataSource>
{
    id <IGARLocationEffectsFeedDataSourceAnnouncer> _announcer;
    NSOrderedSet *_sortedPreviewIdentifiers;
    NSDictionary *_unsortedPreviews;
    IGARLocationEffectPreviewGQLDataProvider *_dataProvider;
    NSArray *_effectIDs;
    _Bool _isLoading;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSDictionary *unsortedPreviews;
@property(readonly, nonatomic) NSOrderedSet *sortedPreviewIdentifiers;
@property(readonly, nonatomic) IGCameraEffectGroupPreview *groupPreview;
@property(readonly, nonatomic) NSArray *creators;
@property(readonly, nonatomic) NSArray *topics;
@property(readonly, nonatomic) _Bool hasMoreAvailablePages;
@property(readonly, nonatomic) NSString *noResultsTitle;
@property(readonly, nonatomic) _Bool hasNoResults;
@property(readonly, nonatomic) _Bool hidesResultsWhileLoading;
@property(readonly, nonatomic) NSString *loadingTitle;
- (void)fetchMore;
- (void)prefetch;
@property(readonly, nonatomic) _Bool isShimmeringEnabled;
- (void)fetch;
- (id)initWithEffectIDs:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
