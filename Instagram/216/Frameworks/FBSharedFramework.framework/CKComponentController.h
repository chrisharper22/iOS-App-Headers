//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/CKComponentControllerProtocol-Protocol.h>

@class CKComponent, NSString, UIView;

@interface CKComponentController : NSObject <CKComponentControllerProtocol>
{
    long long _state;
    _Bool _updatingComponent;
    CKComponent *_component;
    struct mutex _componentMutex;
    UIView *_view;
    CKComponent *_latestComponent;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak CKComponent *latestComponent; // @synthesize latestComponent=_latestComponent;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (void)component:(id)arg1 didAcquireView:(id)arg2;
- (void)component:(id)arg1 willRelinquishView:(id)arg2;
- (void)_relinquishView;
- (void)componentDidUnmount:(id)arg1;
- (void)componentWillUnmount:(id)arg1;
- (void)componentDidMount:(id)arg1;
- (void)componentWillMount:(id)arg1;
- (void)didFinishComponentUpdate;
- (void)willStartUpdateToComponent:(id)arg1;
- (void)didPrepareLayout:(const void *)arg1 forComponent:(id)arg2;
- (void)invalidateController;
- (void)componentTreeDidDisappear;
- (void)componentTreeWillAppear;
- (void)componentDidAcquireView;
- (void)componentWillRelinquishView;
- (void)didUpdateComponent;
- (void)willUpdateComponent;
- (void)didUnmount;
- (void)willUnmount;
- (void)didRemount;
- (void)willRemount;
- (void)didMount;
- (void)willMount;
- (void)didInit;
@property(readonly, nonatomic) _Bool shouldAcquireLockWhenUpdatingComponent;
@property(readonly, nonatomic) __weak CKComponent *threadSafe_component;
@property(readonly, nonatomic) __weak CKComponent *component;
- (void)dealloc;
- (id)initWithComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

