//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGMediaCropperViewController, IGMediaMetadata;

@protocol IGMediaCropperViewControllerDelegate <NSObject>
- (void)mediaCropperViewControllerDidCancel:(IGMediaCropperViewController *)arg1;
- (void)mediaCropperViewController:(IGMediaCropperViewController *)arg1 didFinishWithMediaMetadata:(IGMediaMetadata *)arg2;
@end

