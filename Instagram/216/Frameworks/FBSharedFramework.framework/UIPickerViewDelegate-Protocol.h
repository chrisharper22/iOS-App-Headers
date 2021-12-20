//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSAttributedString, NSString, UIPickerView, UIView;

@protocol UIPickerViewDelegate <NSObject>

@optional
- (void)pickerView:(UIPickerView *)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (UIView *)pickerView:(UIPickerView *)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(UIView *)arg4;
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (NSString *)pickerView:(UIPickerView *)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(UIPickerView *)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(UIPickerView *)arg1 widthForComponent:(long long)arg2;
@end

