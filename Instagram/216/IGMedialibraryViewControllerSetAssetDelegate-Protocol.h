//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;

@protocol IGMedialibraryViewControllerSetAssetDelegate <NSObject>
- (void)mediaLibraryViewControllerDidLoadDrafts:(long long)arg1;
- (void)mediaLibraryViewControllerDidTapManageButton;
- (void)mediaLibraryViewControllerDidChangeAspectRatioFromButtonPress:(_Bool)arg1;
- (void)mediaLibraryViewControllerDidTapAspectRatio;
- (void)mediaLibraryViewControllerDidLongPressCellAtIndexPath:(NSIndexPath *)arg1;
- (void)mediaLibraryViewControllerDidUpdateBarButtons;
- (void)mediaLibraryViewControllerDidSetAsset:(id)arg1;
- (void)mediaLibraryViewControllerDidTapAsset:(id)arg1 atIndex:(long long)arg2;
@end

