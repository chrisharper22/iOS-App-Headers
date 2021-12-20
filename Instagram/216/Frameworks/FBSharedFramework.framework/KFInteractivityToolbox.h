//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFECSToolbox, KFInputManager, KFInteractivityListenerAnnouncer, KFMotionManager, KFProgressMonitor;
@protocol KF2InteractivityMutationCreatorProtocol, KFPlaybackControllerProtocol><KFMutableProtocol;

@interface KFInteractivityToolbox : NSObject
{
    KFInteractivityListenerAnnouncer *_announcer;
    KFInputManager *_inputManager;
    KFMotionManager *_motionManager;
    id <KFPlaybackControllerProtocol><KFMutableProtocol> _animationPlaybackController;
    id <KF2InteractivityMutationCreatorProtocol> _kf2MutationCreator;
    KFProgressMonitor *_progressMonitor;
    KFECSToolbox *_ecsToolbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KFECSToolbox *ecsToolbox; // @synthesize ecsToolbox=_ecsToolbox;
@property(readonly, nonatomic) KFProgressMonitor *progressMonitor; // @synthesize progressMonitor=_progressMonitor;
@property(readonly, nonatomic) id <KF2InteractivityMutationCreatorProtocol> kf2MutationCreator; // @synthesize kf2MutationCreator=_kf2MutationCreator;
@property(readonly, nonatomic) __weak id <KFPlaybackControllerProtocol><KFMutableProtocol> animationPlaybackController; // @synthesize animationPlaybackController=_animationPlaybackController;
@property(readonly, nonatomic) KFMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) KFInputManager *inputManager; // @synthesize inputManager=_inputManager;
@property(readonly, nonatomic) KFInteractivityListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (id)initWithAnnouncer:(id)arg1 inputManager:(id)arg2 motionManager:(id)arg3 animationPlaybackController:(id)arg4 kf2MutationCreator:(id)arg5 progressMonitor:(id)arg6;

@end
