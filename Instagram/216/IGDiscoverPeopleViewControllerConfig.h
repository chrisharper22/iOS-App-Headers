//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDiscoverPeopleCALDataModel, IGUserSession;
@protocol IGDiscoverPeopleViewControllerDelegate;

@interface IGDiscoverPeopleViewControllerConfig : NSObject
{
    _Bool _shouldAutoScroll;
    _Bool _shouldDisablePanGesture;
    _Bool _isInNUXFlow;
    IGUserSession *_userSession;
    long long _entryPoint;
    IGDiscoverPeopleCALDataModel *_calModel;
    id <IGDiscoverPeopleViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGDiscoverPeopleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGDiscoverPeopleCALDataModel *calModel; // @synthesize calModel=_calModel;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) _Bool isInNUXFlow; // @synthesize isInNUXFlow=_isInNUXFlow;
@property(readonly, nonatomic) _Bool shouldDisablePanGesture; // @synthesize shouldDisablePanGesture=_shouldDisablePanGesture;
@property(readonly, nonatomic) _Bool shouldAutoScroll; // @synthesize shouldAutoScroll=_shouldAutoScroll;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)initWithUserSession:(id)arg1 shouldAutoScroll:(_Bool)arg2 shouldDisablePanGesture:(_Bool)arg3 isInNUXFlow:(_Bool)arg4 entryPoint:(long long)arg5 calModel:(id)arg6 delegate:(id)arg7;

@end

