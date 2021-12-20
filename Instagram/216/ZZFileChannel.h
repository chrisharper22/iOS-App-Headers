//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ZZChannel-Protocol.h"

@class NSURL;

@interface ZZFileChannel : NSObject <ZZChannel>
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)newOutput:(out id *)arg1;
- (id)newInput:(out id *)arg1;
- (void)removeAsTemporary;
- (_Bool)replaceWithChannel:(id)arg1 error:(out id *)arg2;
- (id)temporaryChannel:(out id *)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithURL:(id)arg1;

@end

