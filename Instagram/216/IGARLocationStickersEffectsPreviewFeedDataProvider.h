//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGARLocationEffectsFeedDataSource-Protocol.h"

@class IGARLocationEffectsPreviewFeedDataProvider, IGCameraEffectGroupPreview, NSArray, NSDictionary, NSOrderedSet, NSString;

@interface IGARLocationStickersEffectsPreviewFeedDataProvider : NSObject <IGARLocationEffectsFeedDataSource>
{
    IGARLocationEffectsPreviewFeedDataProvider *_dataProvider;
    NSOrderedSet *_sortedStickerIdentifiers;
    NSDictionary *_unsortedStickers;
}

- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) NSDictionary *unsortedPreviews;
@property(readonly, nonatomic) NSOrderedSet *sortedPreviewIdentifiers;
@property(readonly, nonatomic) IGCameraEffectGroupPreview *groupPreview;
@property(readonly, nonatomic) NSArray *creators;
@property(readonly, nonatomic) NSArray *topics;
@property(readonly, nonatomic) _Bool hasMoreAvailablePages;
@property(readonly, nonatomic) _Bool hasNoResults;
@property(readonly, nonatomic) _Bool hidesResultsWhileLoading;
@property(readonly, nonatomic) NSString *loadingTitle;
- (void)fetchMore;
- (void)prefetch;
@property(readonly, nonatomic) _Bool isShimmeringEnabled;
- (void)fetch;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) NSString *noResultsTitle;
- (id)initWithStickers:(id)arg1 effectIDs:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

