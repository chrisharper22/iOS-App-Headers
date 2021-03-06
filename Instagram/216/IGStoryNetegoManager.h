//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGNewPromotionListener-Protocol.h"
#import "IGStoryNetegoBakeoffViewDelegate-Protocol.h"

@class IGStoryNetegoModel, IGUserSession, NSString, UIView;
@protocol IGStoryNetegoController, IGStoryPlayerMediaViewType;

@interface IGStoryNetegoManager : NSObject <IGStoryNetegoBakeoffViewDelegate, IGNewPromotionListener>
{
    IGUserSession *_userSession;
    IGStoryNetegoModel *_storyNetegoModel;
    NSString *_analyticsModule;
    UIView<IGStoryPlayerMediaViewType> *_netegoView;
    unsigned long long _netegoCellState;
    id <IGStoryNetegoController> _netegoController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGStoryNetegoController> netegoController; // @synthesize netegoController=_netegoController;
@property(nonatomic) unsigned long long netegoCellState; // @synthesize netegoCellState=_netegoCellState;
- (id)_getBackgroundMediaViewWithFrame:(struct CGRect)arg1;
- (void)newPromotionSuccessDialogOkActionClick;
- (void)newPromotionCreated;
- (unsigned long long)currentStoryNetegoCellState;
- (void)hideStoryNetegoModelWithSessionId:(id)arg1 postition:(unsigned long long)arg2 analyticsModule:(id)arg3;
- (id)tapAndHoldLabelText;
- (id)currentStoryItem;
- (_Bool)isBackgroundMediaReadyWithContainerSize:(struct CGSize)arg1;
- (id)getMediaViewWithFrame:(struct CGRect)arg1;
- (id)customTappableOverlayModelsWithMediaView:(id)arg1;
- (id)generatedIntentTargetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fullScreenSectionControllerDidEndDisplaying;
- (void)fullScreenSectionControllerWillDisplay;
- (void)configureWithStoryNetegoModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 analyticsModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

