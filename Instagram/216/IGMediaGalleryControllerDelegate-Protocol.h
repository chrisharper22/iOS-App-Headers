//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMediaGalleryController, NSError;

@protocol IGMediaGalleryControllerDelegate <NSObject>
- (void)mediaGalleryController:(IGMediaGalleryController *)arg1 loadingDidFailWithError:(NSError *)arg2;
- (void)mediaGalleryControllerDidUpdate:(IGMediaGalleryController *)arg1;
- (void)mediaGalleryControllerDidLoad:(IGMediaGalleryController *)arg1;
@end

