//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGImageUploadSource, IGUploadCoverPhotoCoordinator, NSError;

@protocol IGUploadCoverPhotoCoordinatorDelegate <NSObject>
- (void)coverPhotoCoordinator:(IGUploadCoverPhotoCoordinator *)arg1 didFinalizeWithCoverImageSource:(IGImageUploadSource *)arg2 error:(NSError *)arg3;
@end
