//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGAsyncTask, IGSundialVideoEditorThumbnailTray;

@protocol IGSundialVideoEditorThumbnailTrayDataSource <NSObject>
- (_Bool)videoEditorThumbnailTray:(IGSundialVideoEditorThumbnailTray *)arg1 deleteThumbnailAtIndex:(long long)arg2 withDiaLog:(_Bool)arg3;
- (void)videoEditorThumbnailTray:(IGSundialVideoEditorThumbnailTray *)arg1 moveThumbnailFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (IGAsyncTask *)videoEditorThumbnailTray:(IGSundialVideoEditorThumbnailTray *)arg1 imageForThumbnailAtIndex:(long long)arg2;
- (double)videoEditorThumbnailTray:(IGSundialVideoEditorThumbnailTray *)arg1 durationForThumbnailAtIndex:(long long)arg2;
- (long long)numberOfItemsInVideoEditorThumbnailTray:(IGSundialVideoEditorThumbnailTray *)arg1;
@end

