//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTVPostLiveMetadataEditorViewController, IGTVUploadMetadata, NSString;

@protocol IGTVPostLiveMetadataEditorDelegate <NSObject>
- (void)tvMetadataEditor:(IGTVPostLiveMetadataEditorViewController *)arg1 didExitWithMetadata:(IGTVUploadMetadata *)arg2;
- (void)tvMetadataEditor:(IGTVPostLiveMetadataEditorViewController *)arg1 didUpdateWithTitle:(NSString *)arg2 showSeriesTag:(_Bool)arg3;
@end

