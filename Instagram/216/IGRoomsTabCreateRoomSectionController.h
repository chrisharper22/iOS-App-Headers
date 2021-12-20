//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListBindingSingleSectionController.h>

@class IGUserSession, IGVideoCallCreateRoomModel;

@interface IGRoomsTabCreateRoomSectionController : IGListBindingSingleSectionController
{
    IGUserSession *_userSession;
    IGVideoCallCreateRoomModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoCallCreateRoomModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_createRoom:(_Bool)arg1;
- (void)didSelectItemWithCell:(id)arg1;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithUserSession:(id)arg1;

@end
