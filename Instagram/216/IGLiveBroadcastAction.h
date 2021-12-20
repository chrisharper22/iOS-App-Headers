//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGLiveBroadcastAccessibilityDescriptor, UIImage, UIView;

@interface IGLiveBroadcastAction : NSObject
{
    _Bool _hidden;
    _Bool _disabled;
    id _identifier;
    id _status;
    CDUnknownBlockType _actionBlock;
    unsigned long long _viewType;
    UIImage *_image;
    UIView *_customView;
    double _cooldown;
    IGLiveBroadcastAccessibilityDescriptor *_accessibilityDescriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGLiveBroadcastAccessibilityDescriptor *accessibilityDescriptor; // @synthesize accessibilityDescriptor=_accessibilityDescriptor;
@property(nonatomic) double cooldown; // @synthesize cooldown=_cooldown;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) id status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;

@end
