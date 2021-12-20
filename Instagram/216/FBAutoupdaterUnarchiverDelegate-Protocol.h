//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAutoupdaterUpdate, NSError, NSProgress, NSString;
@protocol FBAutoupdaterUnarchiver;

@protocol FBAutoupdaterUnarchiverDelegate <NSObject>
- (_Bool)autoupdaterUnarchiver:(id <FBAutoupdaterUnarchiver>)arg1 update:(FBAutoupdaterUpdate *)arg2 shouldUnarchiveFile:(NSString *)arg3 toPath:(NSString *)arg4 crc32:(unsigned long long)arg5;
- (void)autoupdaterUnarchiver:(id <FBAutoupdaterUnarchiver>)arg1 update:(FBAutoupdaterUpdate *)arg2 didFail:(NSError *)arg3;
- (void)autoupdaterUnarchiver:(id <FBAutoupdaterUnarchiver>)arg1 didFinishUpdate:(FBAutoupdaterUpdate *)arg2;
- (void)autoupdaterUnarchiver:(id <FBAutoupdaterUnarchiver>)arg1 update:(FBAutoupdaterUpdate *)arg2 didMakeProgress:(NSProgress *)arg3;
- (void)autoupdaterUnarchiver:(id <FBAutoupdaterUnarchiver>)arg1 didStartUpdate:(FBAutoupdaterUpdate *)arg2;
@end
