//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBWebImageSpecifier-Protocol.h"

@class NSString, NSURL;

@interface IGBloksImageSpecifier : NSObject <FBWebImageSpecifier>
{
    _Bool _shouldBackgroundDecode;
    _Bool _shouldLoadProgressively;
    NSURL *_url;
    NSString *_module;
    long long _imageFetchPriority;
}

+ (id)type;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldLoadProgressively; // @synthesize shouldLoadProgressively=_shouldLoadProgressively;
@property(readonly, nonatomic) long long imageFetchPriority; // @synthesize imageFetchPriority=_imageFetchPriority;
@property(readonly, nonatomic) _Bool shouldBackgroundDecode; // @synthesize shouldBackgroundDecode=_shouldBackgroundDecode;
@property(readonly, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (long long)imageSource;
- (id)logicalIdentifier;
- (id)initWithURL:(id)arg1 shouldLoadProgressively:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
