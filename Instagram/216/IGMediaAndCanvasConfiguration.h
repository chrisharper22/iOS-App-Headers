//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedVideoCellManager_DEPRECATED, UICollectionViewCell;

@interface IGMediaAndCanvasConfiguration : NSObject
{
    UICollectionViewCell *_mainMediaCell;
    IGFeedVideoCellManager_DEPRECATED *_videoCellManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGFeedVideoCellManager_DEPRECATED *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
@property(readonly, nonatomic) UICollectionViewCell *mainMediaCell; // @synthesize mainMediaCell=_mainMediaCell;
- (void)dealloc;
- (id)initWithMainMediaCell:(id)arg1 videoCellManager:(id)arg2;

@end
