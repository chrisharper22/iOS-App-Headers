//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGQPBasePresenter.h"

#import "BKBloksViewHelperDelegate-Protocol.h"
#import "IGQPBloksActionDelegate-Protocol.h"

@class BKBloksViewHelper, IGUserSession, NSString, UIView;

@interface IGQPFloatingBannerViewPresenter : IGQPBasePresenter <BKBloksViewHelperDelegate, IGQPBloksActionDelegate>
{
    IGUserSession *_userSession;
    UIView *_banner;
    BKBloksViewHelper *_bloksViewHelper;
    struct CGPoint _origin;
    double _width;
    _Bool _isInUpdate;
}

- (void).cxx_destruct;
- (void)_showBannerAppearAnimationWithStartY:(double)arg1 endY:(double)arg2;
- (void)bloksViewHelperNeedsUpdate:(id)arg1;
- (void)handleBloksAction:(id)arg1 actionType:(id)arg2;
- (void)didDismissPromotion;
- (void)didClickButtonWithActionType:(id)arg1;
- (_Bool)presentForTriggerID:(id)arg1 fromViewController:(id)arg2;
- (void)dismissCurrentPromotion;
- (id)qpSurfaceID;
- (int)qpType;
- (id)initWithUserSession:(id)arg1 origin:(struct CGPoint)arg2 width:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

