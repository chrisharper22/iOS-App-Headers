//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface FBAutoupdaterReactAssetsResolver : NSObject
{
    NSString *_embeddedBundleAssetsPath;
    NSString *_manifestPath;
    NSString *_otaBundleAssetsPath;
    NSString *_otaBundlePath;
    NSSet *_resolvedAssetsSet;
    _Bool _allowImageUpdate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *otaBundlePath; // @synthesize otaBundlePath=_otaBundlePath;
@property(nonatomic) _Bool allowImageUpdate; // @synthesize allowImageUpdate=_allowImageUpdate;
- (void)loadResolverManifestIfNeeded;
- (id)resolveAssetsURL:(id)arg1;
- (id)initWithEmbeddedBundlePath:(id)arg1;

@end
