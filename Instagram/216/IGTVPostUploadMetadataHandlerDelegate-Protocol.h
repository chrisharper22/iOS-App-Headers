//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVPostUploadMetadataHandler, UIWindow;

@protocol IGTVPostUploadMetadataHandlerDelegate <NSObject>
- (void)tvPostUploadMetadataHandlerDidFail:(IGTVPostUploadMetadataHandler *)arg1;
- (void)tvPostUploadMetadataHandler:(IGTVPostUploadMetadataHandler *)arg1 isLoading:(_Bool)arg2;
- (void)tvPostUploadMetadataHandlerDidComplete:(IGTVPostUploadMetadataHandler *)arg1;
- (UIWindow *)windowToPresentAlert;
@end

