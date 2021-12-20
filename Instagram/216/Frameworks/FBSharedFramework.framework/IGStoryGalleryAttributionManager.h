//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserDefaults, NSMutableDictionary;

@interface IGStoryGalleryAttributionManager : NSObject
{
    IGUserDefaults *_userDefaults;
    NSMutableDictionary *_galleryAttributionDict;
    NSMutableDictionary *_arAttributionMapping;
}

- (void).cxx_destruct;
- (id)_objectForKey:(id)arg1 galleryUUIDString:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2 galleryUUIDString:(id)arg3;
- (id)cameraSwitcherModeForGalleryUUIDString:(id)arg1;
- (void)setCameraSwitcherMode:(id)arg1 forGalleryUUIDString:(id)arg2;
- (id)attributedEffectIDsForGalleryUUIDString:(id)arg1;
- (void)setAttributedEffectIDs:(id)arg1 forGalleryUUIDString:(id)arg2;
- (id)initWithUserDefaults:(id)arg1;

@end
