//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGMediaHiddenListener-Protocol.h"
#import "IGMediaUnhiddenListener-Protocol.h"

@class IGListSectionController, IGMedia, IGUserSession, NSString;
@protocol IGDiscoveryGridHiddenStateHelperDelegate;

@interface IGDiscoveryGridHiddenStateHelper : NSObject <IGMediaHiddenListener, IGMediaUnhiddenListener>
{
    IGListSectionController *_sectionController;
    IGMedia *_media;
    IGUserSession *_userSession;
    NSString *_module;
    id <IGDiscoveryGridHiddenStateHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDiscoveryGridHiddenStateHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)mediaUnhiddenFeedItem:(id)arg1;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3 reason:(long long)arg4;
- (void)_unhideFeedItem;
- (void)_reloadSectionControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldDisplayHiddenState;
- (id)hiddenStateCell;
- (void)handleHiddenStateSelection;
- (void)updateFeedItem:(id)arg1;
- (id)initWithSectionController:(id)arg1 userSession:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

