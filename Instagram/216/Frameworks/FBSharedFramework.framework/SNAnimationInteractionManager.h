//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSOperationQueue, SNAnimationInteractionActionFactory, SNPlayerControllerStack, SNTouchEventHandlingListenerAnnouncer;
@protocol OS_dispatch_queue;

@interface SNAnimationInteractionManager : NSObject
{
    NSDictionary *_interactionActionModels;
    SNPlayerControllerStack *_playerControllerStack;
    SNAnimationInteractionActionFactory *_actionFactory;
    NSOperationQueue *_actionQueue;
    NSObject<OS_dispatch_queue> *_actionUnderlyingQueue;
    SNTouchEventHandlingListenerAnnouncer *_touchEventHandlingAnnouncer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SNTouchEventHandlingListenerAnnouncer *touchEventHandlingAnnouncer; // @synthesize touchEventHandlingAnnouncer=_touchEventHandlingAnnouncer;
- (id)_createInteractionActionsFromModels:(id)arg1;
- (id)_createNewActionUnderlyingQueue:(id)arg1;
- (void)_handleInteraction:(id)arg1;
- (id)createOperationQueue:(id)arg1;
@property(readonly, nonatomic) SNAnimationInteractionActionFactory *actionFactory;
- (void)resetInteractionActions;
@property(readonly, nonatomic) NSArray *interactionNames;
- (void)setInteractionModels:(id)arg1;
- (void)handleInteractions:(id)arg1;
- (id)initWithPlayerControllerStack:(id)arg1 touchEventHandlingAnnouncer:(id)arg2;
- (id)initWithPlayerControllerStack:(id)arg1 touchEventHandlingAnnouncer:(id)arg2 actionFactory:(id)arg3;

@end

