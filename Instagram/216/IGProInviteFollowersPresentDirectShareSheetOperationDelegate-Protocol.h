//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGProInviteFollowersPresentDirectShareSheetOperationCoordinator, IGViewController;
@protocol IGPreviewPresentationDelegate;

@protocol IGProInviteFollowersPresentDirectShareSheetOperationDelegate <NSObject>
@property(nonatomic) __weak id <IGPreviewPresentationDelegate> previewPresentationDelegate;
@property(retain, nonatomic) IGProInviteFollowersPresentDirectShareSheetOperationCoordinator *coordinator;
@property(nonatomic) __weak IGViewController *sourceViewController;
@end

