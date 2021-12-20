//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

#import "IGQPPresenterProtocol-Protocol.h"

@class IGQPEligibilityChecker, IGQPPromotion, IGQPServerContext, IGQPSurfaceID, IGUserSession, NSArray, NSString;
@protocol IGQPDelegate;

@interface IGQPSectionControllerPresenter : IGListBindingSingleSectionController <IGQPPresenterProtocol>
{
    IGQPServerContext *_context;
    NSArray *_promotions;
    IGUserSession *_session;
    IGQPEligibilityChecker *_eligibilityChecker;
    _Bool _didPrepareContext;
    id <IGQPDelegate> _qpCoordinator;
    IGQPPromotion *_currentPromotion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didPrepareContext; // @synthesize didPrepareContext=_didPrepareContext;
@property(readonly, copy, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) IGQPPromotion *currentPromotion; // @synthesize currentPromotion=_currentPromotion;
@property(nonatomic) __weak id <IGQPDelegate> qpCoordinator; // @synthesize qpCoordinator=_qpCoordinator;
- (id)bestPromotionForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (void)dismissCurrentPromotion;
- (void)setBestPromotion:(id)arg1;
- (void)didPrepareWithServerContext;
- (void)prepareWithServerContext:(id)arg1;
@property(readonly, nonatomic) int qpType;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
@property(readonly, copy, nonatomic) IGQPSurfaceID *qpSurfaceID;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

