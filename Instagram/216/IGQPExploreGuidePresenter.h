//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGQPBasePresenter.h"

#import "IGQPExploreGuideProvider-Protocol.h"

@class NSString;

@interface IGQPExploreGuidePresenter : IGQPBasePresenter <IGQPExploreGuideProvider>
{
    _Bool _didLogImpression;
    _Bool _didLogClick;
}

- (void)refreshQuickPromotionForExplore;
- (void)logPrimaryClickForGuideId:(id)arg1;
- (void)logImpressionForGuideId:(id)arg1;
- (id)guideEnabledOnPage;
- (id)guideId;
- (id)qpSurfaceID;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

