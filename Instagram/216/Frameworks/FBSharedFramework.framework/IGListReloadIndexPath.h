//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface IGListReloadIndexPath : NSObject
{
    NSIndexPath *_fromIndexPath;
    NSIndexPath *_toIndexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *toIndexPath; // @synthesize toIndexPath=_toIndexPath;
@property(readonly, nonatomic) NSIndexPath *fromIndexPath; // @synthesize fromIndexPath=_fromIndexPath;
- (id)initWithFromIndexPath:(id)arg1 toIndexPath:(id)arg2;

@end

