//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGImageRequestSummary, IGMediaThumbnailView, NSError, NSString, UIImage;

@protocol IGMediaThumbnailViewDelegate <NSObject>
- (void)mediaThumbnailView:(IGMediaThumbnailView *)arg1 didFailLoadWithError:(NSError *)arg2 networkRequestSummary:(IGImageRequestSummary *)arg3;
- (void)mediaThumbnailView:(IGMediaThumbnailView *)arg1 didLoadImage:(UIImage *)arg2 loadSource:(NSString *)arg3 networkRequestSummary:(IGImageRequestSummary *)arg4;
@end
