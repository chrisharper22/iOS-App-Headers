//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGGenericMegaphoneViewV2Delegate-Protocol.h"
#import "IGMegaphonePresenterProtocol-Protocol.h"

@class IGGenericMegaphone, IGUserSession, NSString, UIView;
@protocol IGMegaphonePresenterDelegate;

@interface IGMultiAuthorStoryViewCountMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol>
{
    NSString *_module;
    IGGenericMegaphone *_megaphone;
    IGUserSession *_userSession;
    id <IGMegaphonePresenterDelegate> _delegate;
}

+ (id)_titleStringForItem:(id)arg1 viewerSources:(id)arg2;
+ (id)createMegaphoneWithItem:(id)arg1 viewerSources:(id)arg2 learnMoreUrl:(id)arg3;
+ (void)handleMegaphoneWillDisplayForStoryItem:(id)arg1 userSession:(id)arg2;
+ (_Bool)shouldShowMegaphoneForStoryItem:(id)arg1 userSession:(id)arg2;
+ (_Bool)canPresentMegaphone:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGMegaphonePresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
- (void)megaphoneViewNeedsResize:(id)arg1;
- (void)megaphoneView:(id)arg1 didSelectButton:(id)arg2;
- (void)megaphoneViewDidDismiss:(id)arg1;
- (void)_handleMegaphoneDismissed;
- (void)logMegaphoneSeen;
@property(readonly, nonatomic) UIView *viewForMegaphone;
- (id)initWithMegaphone:(id)arg1 userSession:(id)arg2 delegate:(id)arg3 module:(id)arg4;
- (id)initWithMegaphone:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

