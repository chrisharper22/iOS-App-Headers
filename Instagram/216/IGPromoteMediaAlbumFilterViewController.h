//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGSelectAlbumDelegate-Protocol.h"

@class IGSelectAlbumController, IGUserSession, NSString;
@protocol IGPromoteAlbumSelectionDelegate;

@interface IGPromoteMediaAlbumFilterViewController : IGViewController <IGSelectAlbumDelegate>
{
    IGUserSession *_userSession;
    IGSelectAlbumController *_selectAlbumController;
    id <IGPromoteAlbumSelectionDelegate> _albumSelectionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPromoteAlbumSelectionDelegate> albumSelectionDelegate; // @synthesize albumSelectionDelegate=_albumSelectionDelegate;
- (void)selectAlbumControllerDidSelectAlbum:(id)arg1 fetchResult:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 boostPostLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

