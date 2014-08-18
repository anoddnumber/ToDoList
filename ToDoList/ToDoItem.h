//
//  ToDoItem.h
//  ToDoList
//
//  Created by Samson Wong on 8/1/14.
//
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
