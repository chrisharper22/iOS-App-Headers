//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGModuleLayoutRepresentation, IGModuleResourceGraph, NSString;

@protocol IGModuleResourceGraphDelegate <NSObject>
- (void)moduleResourceGraph:(IGModuleResourceGraph *)arg1 moduleDidDealloc:(NSString *)arg2;
- (void)moduleResourceGraph:(IGModuleResourceGraph *)arg1 moduleDidChangeFrom:(IGModuleLayoutRepresentation *)arg2 to:(IGModuleLayoutRepresentation *)arg3;
- (void)moduleResourceGraph:(IGModuleResourceGraph *)arg1 didUpdateStateOfModule:(IGModuleLayoutRepresentation *)arg2 change:(unsigned long long)arg3;
@end
