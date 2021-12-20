//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKProfilePictureViewState : NSObject
{
    _Bool _imageShouldFit;
    unsigned long long _pictureMode;
    NSString *_profileID;
    double _scale;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(readonly, nonatomic) unsigned long long pictureMode; // @synthesize pictureMode=_pictureMode;
@property(readonly, nonatomic) _Bool imageShouldFit; // @synthesize imageShouldFit=_imageShouldFit;
- (_Bool)isValidForState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProfileID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 pictureMode:(unsigned long long)arg4 imageShouldFit:(_Bool)arg5;

@end
