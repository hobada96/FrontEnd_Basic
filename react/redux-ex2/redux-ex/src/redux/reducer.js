const initState = {    flag : true,}export const reducer = (state = initState,action) => {    switch (action.type){        case "HIDE_FLAG" :            return{                flag : false            }        case "SHOW_FLAG" :{            return{                flag : true            }        }        default : return{            flag : true        }    }}